#include <stdio.h>
#include<readline/history.h>
#include<readline/readline.h>

int main() {
    // HISTORY_STATE* history_data = history_get_history_state();
    // int base_index = history_base;
    // int history_length_var = history_get_history_length(history_data);
    // printf("Base index = %d\n", base_index);
    // printf("History length = %d\n", history_length_var);
    printf("Imported the history header\n");
    using_history(); 
    HISTORY_STATE * history_get_history_state();
    printf("History state length=%d",HISTORY_STATE);
    return 0;
}
