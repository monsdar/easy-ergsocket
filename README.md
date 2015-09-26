# easy-ergsocket
The goal of this project is to decouple the Concept2 SDK from applications that would like to work with the exercise data. The provided C++ SDK is only available in 32bit and for certain architectures. Applications using this approach do not need to use the SDK directly, they simply connect to the Zmq-Publisher and get the data encoded via Protobuf.

This application connects to the Concept 2 rowing ergometer by using the Highlevel-API [easy-erg](https://github.com/kdahlhaus/easy-erg) by [kdahlhaus](https://github.com/kdahlhaus). It serializes the data with [Google Protobuf](https://developers.google.com/protocol-buffers/) and publishes it onto the network using [Zmq Pub](http://zeromq.org/).

## Install
Please note that this project has been built on my local dev-machine. My dev-machine uses Windows 10 64bit with Visual Studio 2013 Express. I've ran the program on an old Windows 7 64bit laptop connected to the ergometer. There is no guide on how to build this software on your system, but it shouldn't be complicated as long as you're familiar with CMake.

## TODO
This is currently just a proof-of-concept. It works, but that's it. There are certain things that could be done in the future:

* Redesign the code to allow for different de/serialization methods besides Protobuf
* Redesign the code to allow for different network protocols. E.g. It would be cool to support websockets
* Make everything more configurable. Currently everything is configured in code
* Provide more data - The current code just publishes basic information about the ergometer. There would be a lot more that could be done
* Provide 2-way communication - Let connected applications control the ergometer and set up exercises etc
* ...
