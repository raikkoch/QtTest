#############################################################################
# Makefile for building: QtTest.app/Contents/MacOS/QtTest
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  QtTest.pro
# Template: app
# Command: /Users/raikk/Qt/5.5/clang_64/bin/qmake -spec macx-xcode -o QtTest.xcodeproj/project.pbxproj QtTest.pro
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /Users/raikk/Qt/5.5/clang_64/bin/moc
UIC       = /Users/raikk/Qt/5.5/clang_64/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
INCPATH       = -I. -I../../Qt/5.5/clang_64/lib/QtWidgets.framework/Headers -I../../Qt/5.5/clang_64/lib/QtGui.framework/Headers -I../../Qt/5.5/clang_64/lib/QtCore.framework/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/OpenGL.framework/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/AGL.framework/Headers -I. -I../../Qt/5.5/clang_64/mkspecs/macx-clang -F/Users/raikk/Qt/5.5/clang_64/lib
DEL_FILE  = rm -f
MOVE      = mv -f

preprocess: compilers
clean preprocess_clean: compiler_clean

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compilers: moc_mainwindow.cpp moc_dateneingabe.cpp ui_mainwindow.h ui_dateneingabe.h
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_mainwindow.cpp moc_dateneingabe.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_dateneingabe.cpp
moc_mainwindow.cpp: ../../Qt/5.5/clang_64/lib/QtWidgets.framework/Headers/QMainWindow \
		mainwindow.h
	/Users/raikk/Qt/5.5/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -D__APPLE_CC__ -I/Users/raikk/Qt/5.5/clang_64/mkspecs/macx-clang -I/Users/raikk/Documents/QtTest -I/Users/raikk/Qt/5.5/clang_64/lib/QtWidgets.framework/Headers -I/Users/raikk/Qt/5.5/clang_64/lib/QtGui.framework/Headers -I/Users/raikk/Qt/5.5/clang_64/lib/QtCore.framework/Headers -F/Users/raikk/Qt/5.5/clang_64/lib mainwindow.h -o moc_mainwindow.cpp

moc_dateneingabe.cpp: ../../Qt/5.5/clang_64/lib/QtWidgets.framework/Headers/QDialog \
		dateneingabe.h
	/Users/raikk/Qt/5.5/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -D__APPLE_CC__ -I/Users/raikk/Qt/5.5/clang_64/mkspecs/macx-clang -I/Users/raikk/Documents/QtTest -I/Users/raikk/Qt/5.5/clang_64/lib/QtWidgets.framework/Headers -I/Users/raikk/Qt/5.5/clang_64/lib/QtGui.framework/Headers -I/Users/raikk/Qt/5.5/clang_64/lib/QtCore.framework/Headers -F/Users/raikk/Qt/5.5/clang_64/lib dateneingabe.h -o moc_dateneingabe.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_dateneingabe.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_dateneingabe.h
ui_mainwindow.h: mainwindow.ui
	/Users/raikk/Qt/5.5/clang_64/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_dateneingabe.h: dateneingabe.ui
	/Users/raikk/Qt/5.5/clang_64/bin/uic dateneingabe.ui -o ui_dateneingabe.h

compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

