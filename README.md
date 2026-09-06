# data-structures

Data structures and algorithms in C++: arrays, lists, stacks, queues, sorting,
hash tables, trees, and string matching. Each example in [src/](src/) builds as a
separate CMake target.

[Implementation index and notes](REFERENCE.md)

## Use

Windows, Visual Studio 2019 / 2022 / 2026, and CMake 3.24 or later with support for
the selected Visual Studio version. Run from the repository root in Command Prompt:

```bat
build_project.bat
open_in_vs.bat
```

Choose a startup target in Visual Studio and press F5. Build outputs go to
`bin/<configuration>-<architecture>/`.
