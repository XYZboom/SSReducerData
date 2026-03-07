import pandas as pd
import numpy as np
from matplotlib import pyplot as plt
from draw_reconstruct import draw

if __name__ == '__main__':
    df = pd.read_excel(
        "reconstruct.xlsx",
        header=[0, 1], nrows=18,
        engine='openpyxl',
        engine_kwargs=dict(data_only=True)
    )
    draw(df)

    df2 = pd.read_excel(
        "reconstruct.xlsx",
        header=[0, 1], nrows=18,
        engine='openpyxl',
        engine_kwargs=dict(data_only=True)
    )
    draw(df2, probs=['1.0', '0'], vert=False)

    worse_than_perses = [3, 5, 7, 11, 12, 13, 16]
    df_1 = pd.read_excel(
        "reconstruct.xlsx",
        header=[0, 1], nrows=18 - len(worse_than_perses), skiprows=worse_than_perses,
        engine='openpyxl',
        engine_kwargs=dict(data_only=True)
    )
    draw(df_1, probs=['1.0', '0'])
