
* ODEライブラリをビルドする。
```
Dowload latest (ode-0.16.tar.gz) archive files from https://bitbucket.org/odedevs/ode/downloads/

sudo apt-get install automake libtool freeglut3-dev

wget https://bitbucket.org/odedevs/ode/downloads/ode-0.16.tar.gz
tar xvfz ode-0.16.tar.gz
cd ode-0.16
./bootstrap
./configure --enable-shared --enable-double-precision --with-drawstuff=X11
make -j4
```

* サンプルコードをビルドする。
```
cd cpp_sample
mkdir build
cd build
cmake ..
make -j8
```

```
sudo cp -r include/drawstuff /usr/local/include/
sudo cp drawstuff/src/.libs/libdrawstuff.* /usr/local/lib
sudo ldconfig
sudo mkdir /usr/local/lib/drawstuff.textures
sudo cp drawstuff/textures/* /usr/local/lib/drawstuff.textures/
```
