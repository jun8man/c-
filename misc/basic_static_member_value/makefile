# makefile
# マクロを使ったmakefileの書き方.

PROGRAM = basic_static_member_value
OBJ = main.o rat.o
CXX	= g++
# -c = コンパイルのみ実行する(リンクしない).これをつけないとリンクされてしまうので分割コンパイル時には注意.
# -g = 実行ファイルにデバッグ情報を埋め込む.Linuxではデバッガ(gdb)が使えるのでそれ用に.つけないと変数名や行番号が表示されない.
# -Wall = 全ての警告メッセージが表示されるようになる.
CXXFLAGS = -c -g -Wall

.PHONY: all
all: basic_static_member_value

# ここでリンクする. $@ = ターゲット名. $^ = 依存ファイルのリスト.
# -o = 出力ファイル名の指定.
${PROGRAM}: ${OBJ}
	$(CXX) -o $@ $^

# $< = 依存ファイルの先頭のファイルを示す = main.cpp.
main.o: main.cpp rat.h
	${CXX} ${CXXFLAGS} $<

# $< = 依存ファイルの先頭のファイルを示す = main.cpp.
basic_static_member_value.o: basic_static_member_value.cpp basic_static_member_value.h
	${CXX} ${CXXFLAGS} $<

# RM = rm -rf
.PHONY: clean
clean:
	${RM} ${PROGRAM} ${OBJ}
