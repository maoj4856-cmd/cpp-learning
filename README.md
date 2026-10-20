# cpp-learning
My c++ learning journey and practice projects

## 学习目录

每个 `.cpp` 都是包含独立 `main()` 的学习练习，请逐个编译运行。

| 主题目录 | 源码 | 内容 |
| --- | --- | --- |
| 01-hello-world | [main.cpp](01-hello-world/main.cpp) | 第一个 C++ 程序与输出 |
| 02-variables-and-io | [hello.cpp](02-variables-and-io/hello.cpp) | 变量、字符串和输入输出 |
| 02-variables-and-io | [type_conversion.cpp](02-variables-and-io/type_conversion.cpp) | 整数除法与类型转换 |
| 03-arithmetic | [average.cpp](03-arithmetic/average.cpp) | 三科总分与平均分 |
| 04-conditionals | [adult.cpp](04-conditionals/adult.cpp) | 成年判断 |
| 04-conditionals | [score.cpp](04-conditionals/score.cpp) | 分数检查与等级划分 |
| 04-conditionals | [calculator.cpp](04-conditionals/calculator.cpp) | switch 分支与四则运算 |
| 05-logical-operators | [Scholarship.cpp](05-logical-operators/Scholarship.cpp) | 奖学金条件组合 |
| 05-logical-operators | [Ticket.cpp](05-logical-operators/Ticket.cpp) | 入场资格与逻辑运算 |
| 06-loops | [plus.cpp](06-loops/plus.cpp) | while 循环统计 |
| 06-loops | [count.cpp](06-loops/count.cpp) | do-while 循环统计 |
| 06-loops | [累加器.cpp](06-loops/%E7%B4%AF%E5%8A%A0%E5%99%A8.cpp) | for 循环累加 |
| 06-loops | [九九乘法表.cpp](06-loops/%E4%B9%9D%E4%B9%9D%E4%B9%98%E6%B3%95%E8%A1%A8.cpp) | 嵌套循环 |
| 06-loops | [if-break-continue.cpp](06-loops/if-break-continue.cpp) | break 和 continue |
| 06-loops | [MAX&MIN.cpp](06-loops/MAX%26MIN.cpp) | 循环统计最大值、最小值与均值 |
| 06-loops | [大小比较.cpp](06-loops/%E5%A4%A7%E5%B0%8F%E6%AF%94%E8%BE%83.cpp) | 过滤输入、提前退出与统计 |
| 07-number-theory | [prime.cpp](07-number-theory/prime.cpp) | 嵌套循环判断并枚举素数 |

目录依次为：入门输出、变量与输入输出、算术运算、条件分支、逻辑运算、循环、数论练习。

## 编译与运行

配置好支持 C++11 的编译器后，在仓库根目录选择一个源文件编译。以下示例使用 `g++`，编译产物放到已忽略的 `build/` 目录。

Windows PowerShell：

```powershell
New-Item -ItemType Directory -Force build | Out-Null
g++ -std=c++11 -Wall -Wextra "04-conditionals/adult.cpp" -o "build/adult.exe"
.\build\adult.exe
```

Linux / macOS：

```sh
mkdir -p build
g++ -std=c++11 -Wall -Wextra "04-conditionals/adult.cpp" -o "build/adult"
./build/adult
```

不要把所有源码链接成一个程序，因为每个文件都有自己的 `main()`。布尔输入（VIP、门票、处分等）使用 `0` 或 `1`。

## 整理与学习记录

- 收录 GitHub 已有练习，以及本地尚未提交的练习，共 17 个独立程序。只整理路径和文件名，保留原有源码内容。
- `Daily study/平均数计算.cpp` 在本地已改名为 `average.cpp`；核对内容相同（仅换行形式不同），统一放在 `03-arithmetic/average.cpp`。
- `Daily study/if break continue ` 实际是 C++ 源码；移除文件名末尾空格并补齐扩展名，保存为 `06-loops/if-break-continue.cpp`。
- 原 VS Code 配置保留在 `.vscode/settings.json`。
- 清理已提交的三个 `.exe`，本地额外生成的九个 `.exe` 不纳入提交。`.gitignore` 忽略可执行文件、对象文件及 `build/`、`bin/` 输出目录。
- 原提交历史保留；后续练习和笔记可放入对应主题目录。
