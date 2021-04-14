# 命令行连接网络
用于命令行的快捷网络连接程序

## 安装

如果是x86下的win10或者Linux，可以直接下载二进制文件使用，其他的需要下载源码重新编译。

* 编译步骤

  下载该仓库：

  `git clone https://github.com/ThomasZB/cqupt-connect-net.git`

  进入src目录构建：

  `cd src`

  `make`

* 编译的结果在上一级目录，可以根据需要选择是否加入环境变量

## 使用

* 直接通过用户名和密码连接，通过下述两种方式都能实现连接。

```shell
./cquptnc -u 账号 -p 密码
```

```shell
./cquptnc 账号 密码
```

* 通过配置文件连接

  若该目录下有config.txt，账户和密码都在里面，可以无需输入账户和密码直接连接

```shell
./cquptnc
```

* 查看连接状态

```shell
./cquptnc status
```

