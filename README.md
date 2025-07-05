# 密码生成器

## 用法

### 编译

先访问winlibs.com
![winlibs](https://github.com/user-attachments/assets/2d8b997e-81b6-44e1-aefe-f54239eed599)
点击download或往下翻，找到如图所示的界面
![download](https://github.com/user-attachments/assets/782a6432-e5be-48a6-97c1-a18feb9b70f0)
下载g++最新版。
记录解压到的目录。
打开之后找到bin文件夹，记录路径，并把它添加到PATH环境变量。

打开cmd，cd到此程序的目录
输入`g++ makepassword(zh-CN)(mcpp).cpp -o makepassword(zh-CN)(mcpp).exe -static`(中文版,生成Password.exe)或`g++ makepassword(en-US)(mcpp).cpp -o makepassword(en-US)(mcpp).exe -static`(英文版,生成Password.exe)或输入`g++ makepassword(zh-CN).cpp -o makepassword(zh-CN).exe -static`(中文版,不生成Password.exe)或`g++ makepassword(en-US).cpp -o makepassword(en-US).exe -static`(英文版,不生成Password.exe)。

### 使用

双击运行编译后的可执行文件，按照提示输入密码的信息，输入完成后它会停止几秒(mcpp版本)然后退出。

mcpp版本需要如“编译”板块所示配置g++。

它会生成Password.txt(mcpp版本还生成Password.exe)。Password.exe在运行后剪贴板会被写入密码，不需要依赖Password.txt。Password.txt中存储完整密码。

# Password Generator

## Usage

### Compilation

First visit winlibs.com
![winlibs](https://github.com/user-attachments/assets/2d8b997e-81b6-44e1-aefe-f54239eed599)
Click download or scroll down to find the interface as shown in the figure
![download](https://github.com/user-attachments/assets/782a6432-e5be-48a6-97c1-a18feb9b70f0)
Download the latest version of g++.
Record the directory where you extract it.
Open it and find the bin folder, record the path and add it to the PATH environment variable.

Open cmd, cd to the directory of this program
Input `g++ makepassword(zh-CN)(mcpp).cpp -o makepassword(zh-CN)(mcpp).exe -static`(Chinese version, generate Password.exe) or `g++ makepassword(en-US)(mcpp).cpp -o makepassword(en-US)(mcpp).exe -static`(English version, generate Password.exe) or input `g++ makepassword(zh-CN).cpp -o makepassword(zh-CN).exe -static`(Chinese version, not generate Password.exe) or `g++ makepassword(en-US).cpp -o makepassword(en-US).exe -static`(English version, not generate Password.exe).

### Use

Double-click to run the compiled executable file, enter the password information as prompted, and it will stop for a few seconds (mcpp version) and then exit after completion.

The mcpp version requires g++ configuration as shown in the "Compilation" section.

It will generate Password.txt (mcpp version also generates Password.exe). Password.exe will write the password to the clipboard when run and does not depend on Password.txt. Password.txt stores the complete password.
