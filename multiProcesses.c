#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h> // Include the time.h header file

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int num_processes = sizeof(numbers) / sizeof(numbers[0]);

    time_t start_time = time(NULL); // Initialize start_time using time(NULL)
    while ((time(NULL) - start_time) < 30) {
        for (int i = 0; i < num_processes; i++) {
            pid_t pid = fork();
            if (pid == 0) {
                // Child process
                printf("Process ID: %d, Factorial of %d: %d\n", getpid(), numbers[i], factorial(numbers[i]));
                exit(0);
            } else if (pid < 0) {
                perror("fork");
                return 1;
            }
        }

        // Wait for all child processes to complete
        for (int i = 0; i < num_processes; i++) {
            wait(NULL);
        }
    }

    return 0;
}
