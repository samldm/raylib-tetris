# raylib-tetris

## Dépendances

* [Raylib](https://www.raylib.com/)

## Compilation

### Via VSCode

1. Ouvrez la palette de commandes dans Visual Studio Code `(Ctrl+Shift+P).`
2. Recherchez `Tasks: Run Task` et sélectionnez-le
3. Choisissez **build debug** ou **build release**

### Via Terminal

- Pour une compilation en mode **Debug**:
```
C:/raylib/w64devkit/bin/mingw32-make.exe RAYLIB_PATH=C:/raylib/raylib PROJECT_NAME=main OBJS=src/*.cpp BUILD_MODE=DEBUG
```

- Pour une compilation en mode **Release**:
```
C:/raylib/w64devkit/bin/mingw32-make.exe RAYLIB_PATH=C:/raylib/raylib PROJECT_NAME=main OBJS=src/*.cpp
```