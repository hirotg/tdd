# コンパイラとコンパイルオプション
CXX = g++
CXXFLAGS = -std=c++11
LDFLAGS = -lCppUTest -lCppUTestExt

# ディレクトリ
SRC_DIR = src
TEST_DIR = test
OBJ_DIR = obj
BIN_DIR = bin

# ファイル拡張子
SRC_EXT = c
OBJ_EXT = o
BIN_EXT = out

# ターゲットファイル
TARGET = $(BIN_DIR)/main.$(BIN_EXT)

# ソースファイルとオブジェクトファイルのリスト
SRC_FILES = $(wildcard $(SRC_DIR)/*.$(SRC_EXT)) $(wildcard $(TEST_DIR)/*.$(SRC_EXT))
OBJ_FILES = $(patsubst $(SRC_DIR)/%.$(SRC_EXT), $(OBJ_DIR)/%.$(OBJ_EXT), $(SRC_FILES))
OBJ_FILES := $(patsubst $(TEST_DIR)/%.$(SRC_EXT), $(OBJ_DIR)/%.$(OBJ_EXT), $(OBJ_FILES))

# ルール
all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.$(OBJ_EXT): $(TEST_DIR)/%.$(SRC_EXT)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean