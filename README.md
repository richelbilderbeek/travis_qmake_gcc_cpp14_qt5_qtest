# travis_qmake_gcc_cpp14_qt5_qtest

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

Branch|Status
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtest.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtest)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtest.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtest)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` and `Qt5` using QTest
 * Code coverage: none
 * GUI testing: QTest
 * Source: QDialog with Qt resource file

More complex builds:
 * Add code coverage: [travis_qmake_gcc_cpp14_gcov_qt5_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_gcov_qt5_qtest)
 * Add OCLint: [travis_qmake_gcc_cpp14_oclint_qt5_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_oclint_qt5_qtest)

Less complex builds:
 * Use Qt4 instead of Qt5: [travis_qmake_gcc_cpp14_qt4_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt4_qtest)
 * C++98: [travis_qmake_gcc_cpp98_qt_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt_qtest)
 * C++11: [travis_qmake_gcc_cpp11_qt_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_qt_qtest)
 * No QTest: [travis_qmake_gcc_cpp14_qt5](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt5)
