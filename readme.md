**Linux下的C开发是基本功**，<u>原因如下</u>：
* Android源码追本溯源都是基于Linux c库，如binder,messagequeue等 
* Java源码追踪，linux下的C也是绕不开的障碍
*** 
# 开发环境
* 系统
CentOS
* 编译器
G++
* 代码管理
git
* 开发IDE
Visual Code

## 开发环境搭建
### 1. windows开发环境
* 准备一个centos云主机
* 在windows下安装putty和visual Code
* centos安装git
* centos安装g++
```cmd
    yum install gcc gcc-c++ kernel-devel
    yum groupinstall "Development Tools"
    yum install make
```
* centos安装fpt服务
```text
    1、
    2、
    3、
```
* 将centos共享的fpt目录映射到windows下
- *可实现映射到网络地址，但是在visual code里面无法找到目录，目前未完成映射云主机centos目录到windos本地磁盘*
### 2. Mac开发环境
*以下内容无先后顺序*
* 挂载云主机目录到本地
```cmd
Brew install sshfs
sshfs -C -o reconnect root@47.99.194.54:/var/ftp ~/mnt/ftp
```
* 登陆云主机
```cmd
ssh root@源主机公网地址
```
* 下载并安装或升级FUSE,以支持挂载网络文件
* 直接通过visual code打开Mac下的~/mnt/fpt文件即可
* ~~安装vcpkg~~
# 容器
* Vector
* Array

# 算法
* 红黑树

