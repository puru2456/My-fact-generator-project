// C Version
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACTS_COUNT 3

int main() {
    const char *personalFacts[] = {
        "An 18-year-old photography enthusiast who combines trekking adventures with capturing mountain views",
        "A bookworm who loves experimenting with cooking in their free time",
        "An avid traveler who finds happiness in long road trips and exploring new destinations"
    };
    
    srand(time(NULL));
    int randomIndex = rand() % FACTS_COUNT;
    
    printf("Personal Fact: %s\n", personalFacts[randomIndex]);
    
    return 0;
}
