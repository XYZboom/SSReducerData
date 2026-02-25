import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

def draw(df: pd.DataFrame):
    np.random.seed(0)
    colors = plt.rcParams['axes.prop_cycle'].by_key()['color']
    df.columns = ['_'.join(col).strip() for col in df.columns.values]
    probs = ['1.0', '0.75', '0.5', '0.25', '0']
    stats = [
        ('P', 'Predict Times'),
        ('T', 'Time(s)'),
        ('R', 'Remain Tokens'),
        ('S', 'Speed(token/s)')
    ]  # predict times, times, remain tokens, speed
    col_str = 'S p{p} + Latra Loop_{stat}'
    for stat, stat_label in stats:
        cols = []
        for prob in probs:
            col_name = col_str.format(p=prob, stat=stat)
            col = list(filter(lambda v: not np.isnan(v), df[col_name].values))
            cols.append(col)
        fig, ax = plt.subplots()
        ax.boxplot(
            cols,
            tick_labels=probs,
            flierprops=dict(marker='None')
        )
        for i, (col, color) in enumerate(zip(cols, colors)):
            x = np.random.normal(i + 1, 0.06, size=len(col))  # 抖动
            ax.scatter(x, col, alpha=0.7, s=30, color=color, edgecolors='white', linewidth=0.5)
        if stat == 'S':
            ax.set_yscale('log')
        ax.set_title(stat_label)
        plt.show()