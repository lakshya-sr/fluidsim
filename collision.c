Collision *detect_collision(Domain *domain){
    for (int i = 0; i < domain -> num_particles; i++){
        for (int j = 0; j < domain -> num_particles; j++){
            if (distance_squared(domain -> particles[i], domain -> particles[j]) < domain -> particle_radius_squared){
                Collision collision = create_collision();
            }
        }
    }
}

