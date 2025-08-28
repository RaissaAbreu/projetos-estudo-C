#include <stdio.h>
int main(void) {
    int team_players, team1, team2, team1_w = 0, team2_w = 0;
    scanf("%d", &team_players);
    int i;
    for(i = 0; i < team_players; i++) {
        scanf("%d %d", &team1, &team2);
        team1_w += team1;
        team2_w += team2;
    }
    if (team1_w > team2_w){
        printf("Team 1 has an advantage\ntotal weight for team 1: %d\ntotal weight for team 2: %d", team1_w, team2_w);
    }else{
        printf("Team 2 has an advantage\ntotal weight for team 1: %d\ntotal weight for team 2: %d", team1_w, team2_w);
    }
    return 0;
}