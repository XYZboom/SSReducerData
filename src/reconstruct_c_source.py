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
