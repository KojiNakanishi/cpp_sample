
Dowload latest (ode-0.16.tar.gz) archive files from https://bitbucket.org/odedevs/ode/downloads/

$ tar xvfz ode-0.16.tar.gz
$ sudo apt-get install automake
$ cd ode-0.16
$ ./bootstrap
$ ./configure --enable-shared --enable-double-precision --with-drawstuff=X11
$ make -j4

sudo cp -r include/drawstuff /usr/local/include/
sudo cp drawstuff/src/.libs/libdrawstuff.* /usr/local/lib
sudo ldconfig
sudo mkdir /usr/local/lib/drawstuff.textures
sudo cp drawstuff/textures/* /usr/local/lib/drawstuff.textures/