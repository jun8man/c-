# makefile
# プログラム名とオブジェクトファイル名.
PROGRAM = basic_overload
OBJS	= main.o calc.o

# コンパイラとオプション指定.
CXX = g++
CXXFLAGS = -g -Wall

# サフィックスルール適用対象の拡張子.
# 例えば、ターゲット名が“hoge.o”ならばmakeはこのサフィックスルールより“hoge.c”に依存していると判断して、コマンドを実行し“hoge.o”を生成する.
.SUFFIXES: .c .o

.PHONY:
all: ${PROGRAM}

# プライマリターゲット.
${PROGRAM}: ${OBJS}
	${CXX} -o $@ $^

# サフィックスルール.
.c .o:
	${CXX} ${CXXFLAGS} -c $<

# ヘッダファイルの依存関係.
# サフィックスルールを使ってもこれだけは自分で書かねばならない.
main.o: calc.h
calc.o: calc.h

# 中間ファイル削除用ターゲット.
.PHONY:
clean:
	${RM} ${PROGRAM} ${OBJS}
