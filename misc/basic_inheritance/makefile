# makefile
# サフィックスルールを用いたmakefileの書き方.

# プログラム名とオブジェクトファイル名.
PROGRAM = basic_inferitance
OBJS	= main.o optical_zoom.o digital_zoom.o hybrid_zoom.o

# コンパイラとオプション指定.
CXX = g++
CXXFLAGS = -g -Wall

# サフィックスルール適用対象の拡張子.
# サフィックスルールは拡張子ごとにルールを定義可能.
# 下記の場合、".c.o"がサフィックスルールとなっており、拡張子が“.o”のファイルは拡張子を“.c”変えたファイルに依存していることを表す.
# 変換方法はコマンドで表されている.
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
main.o: zoom.hpp optical_zoom.hpp digital_zoom.hpp hybrid_zoom.hpp
optical_zoom.o: zoom.hpp optical_zoom.hpp
digital_zoom.o: zoom.hpp digital_zoom.hpp
hybrid_zoom.o: zoom.hpp hybrid_zoom.hpp

# 中間ファイル削除用ターゲット.
.PHONY:
clean:
	${RM} ${PROGRAM} ${OBJS}
