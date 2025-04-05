#include <stdio.h>

int main(void){
    Particle particles[1000];
    
    while(1){
        integrate_velocity(particles);
        Collision *collisions = detect_collisions(particles);
        resolve_collisions(collisions);
        draw_particles(particles);
    }

}
