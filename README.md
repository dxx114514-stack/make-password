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
输入`g++ makepassword(zh-CN)(cpp).cpp -o makepassword(zh-CN)(mcpp) -static`(中文版,生成Password.exe)或`g++ makepassword(en-US)(mcpp).cpp -o makepassword(en-US) -static`(English,make Password.exe)。

### 使用
双击运行编译后的可执行文件，按照提示输入密码的信息，输入完成后它会停止几秒(mcpp版本)然后退出。

mcpp版本需要如“编译”板块所示配置g++。

它会生成Password.txt(mcpp版本还生成Password.exe)。Password.exe在运行后剪贴板会被写入密码，不需要依赖Password.txt。Password.txt中存储完整密码。
