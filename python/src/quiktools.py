import os, sys

def list_directory_contents(path: str) -> list[str]:
    list: list[str] = os.listdir(path)
    return list

# WIP