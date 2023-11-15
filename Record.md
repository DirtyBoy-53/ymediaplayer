# ymediaplayer
## 2023年11月15日
>- 资源文件夹res中添加了image、skin、language三个文件夹，分别存放图片、皮肤、语言文件
>- skin增加light和dark两款皮肤，分别对应浅色和深色主题
>- 增加wintitlebar
>- 解决窗口不显示问题
```C++
//sscanf(str.c_str(),"%d,%d,%d,%d",&x,&y,&w,&h);//原始字符串中是带有rect(),因此解析出现了问题
sscanf(str.c_str(),"rect(%d,%d,%d,%d)",&x,&y,&w,&h);
```