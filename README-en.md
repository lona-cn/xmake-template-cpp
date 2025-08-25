# template
English | [简体中文](./README.md) </br>

A cpp project template based on `xmake`

## How to use

### 0. How to add a new target
- `app/source/programs/demo`: Example of an executable program
- `app/source/runtime/common`: Example of a static library
- `app/source/programs/demo/test`: Example of an executable program test
- `app/source/runtime/common/test`: Example of a static library test
Preset directory structure for `target`:
- `$(targetdir)`: Public code, can contain header and source files. Headers here will be used by `install` and other dependent `target`s
- `$(targetdir)/private`: Private code, can contain header and source files
- `$(targetdir)/test`: Test code, each file matching `^test_.*\.(c|cpp|cc|cxx)$` will be treated as a test

### 1. Project configuration
- `xmake/project.lua`: Basic project configuration
	- Project name
	- Project version
	- C/C++ language version
	- Vectorization instruction set
	- flags
	- Platform support
	- Build modes, such as `release`, `debug`, `releasedbg`, `check`, etc.
- `Header installation location`: Modify the `header_install_prefix` variable in `xmake/funcs/funcs_target.lua`, default is `xmake-template-cpp`
- `app/assets`: Assets
	- `app/assets/main`: Runtime assets
	- `app/assets/test`: Test assets
- `app/binaries`: Stores binary files such as `dll`, `so`, `lib`, `a`, `exe`, `elf`, etc.
- `app/config`: Various configuration files
	- `app/config/base`: Cross-platform configuration files
	- `app/config/$(plat)_$(arch)`: Configuration files for the target platform only
- `app/source`: Various source codes
	- `app/source/requires.lua`: Third-party libraries added via `add_requires`
	- `app/source/programs`: Executable program source code
	- `app/source/runtime`: Static library, dynamic library, `headeronly` source code
	- `app/source/third`: Third-party library source code

### 2. `xmake` modules, plugins, rules, description domain functions
- `xmake/modules`: Custom modules
- `xmake/plugins`: Custom plugins
- `xmake/rules`: Custom rules
- `xmake/funcs`: Description domain functions or variables

### 3. Local `xrepo` repository configuration
- `xmake/repo/packages`: Local repository package storage location

How to add custom packages, see: TODO
### 4. External scripts
- `scripts`: External scripts in formats such as `sh`, `bat`, `ps1`, etc.
### 5. Documentation configuration
`doc/`: All documentation is stored here
- `doc/images`: Images
- `doc/openapi`: http api
- `doc/puml`: PlantUML