#include <integrator.h>

void integrate_velocity(Particle *particles){
    for (int i = 0; i < num_particles; i++){
        Particle *particle = &particles[i];
        particle -> x = trapezoid_integrator(particle -> x, particle -> vx, dt);
        particle -> y = trapezoid_integrator(particle -> y, particle -> vy, dt);
    }
}

