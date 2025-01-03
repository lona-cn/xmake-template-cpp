# template
[English](./README-en.md) | 简体中文 </br>

基于`xmake`的cpp项目模板

## 如何使用

### 0.如何添加一个新的target
1. `app/source/programs/demo`：可执行程序例子
2. `app/source/runtime/common`：静态库例子
3. `app/source/programs/demo/test`：可执行程序测试例子
4. `app/source/programs/commonx/test`：静态库程序测试例子
`target`预设目录结构：
- `$(targetdir)`：公共代码，可以有头文件和源文件，此处的头文件会被`install`和被依赖它的其他`target`所使用
- `$(targetdir)/private`：私有代码，可以有头文件和源文件
- `$(targetdir)/test`：测试代码，每个匹配`^test_.*\.(c|cpp|cc|cxx)$`的文件均会被视为一个测试

### 1.项目配置
1. `xmake/project.lua`：项目基本配置
   1. 项目名称
   2. 项目版本
   3. C/C++语言版本
   4. 向量化指令集
   5. flags
   6. 平台支持
   7. 构建模式，如`release`、`debug`、`releasedbg`、`check`等
2. `app/assets`：资产
   1. `app/assets/main`：运行时资产
   2. `app/assets/test`：测试时资产
3. `app/binaries`：存储如`dll`、`so`、`lib`、`a`、`exe`、`elf`等二进制文件
4. `app/config`：各种配置文件
   1. `app/config/base`：全平台配置文件
   2. `app/config/$(plat)_$(arch)`：仅目标平台的配置文件
5. `app/source`：各种源代码
   1. `app/source/programs`：可执行程序源代码
   2. `app/source/runtime`：静态库、动态库、`headeronly`源代码
   3. `app/source/third`：第三方库源代码

### 2.`xmake`模块、插件、规则、描述域函数
1. `xmake/modules`：自定义模块
2. `xmake/plugins`：自定义插件
3. `xmake/rules`：自定义规则
4. `xmake/funcs`：描述域函数或变量

### 3.本地`xrepo`仓库配置
1. `xmake/repo/packages`：本地仓库包存放位置

如何添加自定义的包，详情参考：TODO
### 4.外部脚本
1. `scripts`：`sh`、`bat`、`ps1`等各种格式的外部脚本
### 5.文档配置
`doc/`：所有文档存放于此
1. `doc/images`：图片
2. `doc/openapi`：http api
3. `doc/puml`：PlantUML