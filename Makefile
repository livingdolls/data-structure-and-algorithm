# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Directories
EXAMPLES_DIR = examples
BUILD_DIR = build

# Example executables
EXAMPLES = linked_list_example stack_example sorting_example graph_example bst_example

# Default target
all: $(BUILD_DIR) $(EXAMPLES)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build each example
linked_list_example: $(EXAMPLES_DIR)/linked_list_example.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@

stack_example: $(EXAMPLES_DIR)/stack_example.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@

sorting_example: $(EXAMPLES_DIR)/sorting_example.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@

graph_example: $(EXAMPLES_DIR)/graph_example.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@

bst_example: $(EXAMPLES_DIR)/bst_example.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@

# Run all examples
run_all: all
	@echo "Running Linked List Example:"
	@./$(BUILD_DIR)/linked_list_example
	@echo ""
	@echo "Running Stack Example:"
	@./$(BUILD_DIR)/stack_example
	@echo ""
	@echo "Running Sorting Example:"
	@./$(BUILD_DIR)/sorting_example
	@echo ""
	@echo "Running Graph Example:"
	@./$(BUILD_DIR)/graph_example
	@echo ""
	@echo "Running BST Example:"
	@./$(BUILD_DIR)/bst_example

# Individual run targets
run_linked_list: linked_list_example
	./$(BUILD_DIR)/linked_list_example

run_stack: stack_example
	./$(BUILD_DIR)/stack_example

run_sorting: sorting_example
	./$(BUILD_DIR)/sorting_example

run_graph: graph_example
	./$(BUILD_DIR)/graph_example

run_bst: bst_example
	./$(BUILD_DIR)/bst_example

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean run_all run_linked_list run_stack run_sorting run_graph run_bst
