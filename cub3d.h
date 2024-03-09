#ifndef CUB3D_H
#define CUB3D_H

# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx.h>
# include "MLX/MLX42.h"

#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1000
#define FOV 60
#define SPEED 4.2
#define ROTATION 0.042

// Mlx library struct
typedef struct s_mlx //the mlx structure
{
 mlx_image_t  *img; // the image
 mlx_t   *mlx_p; // mlx pointer
 t_ray   *ray; // ray structure
 t_data   *data; // data structure
 t_player  *plyr; // player structure
} t_mlx;

// Map data struct
#typedef struct s_map {
    char **map2d;
    int w_map;
    int h_map;
    int x_pos_map;
    int y_pos_map;
} t_map;

// Raycasting struct
typedef struct s_ray
{
 double ray_ang; // ray angle
 double wall_dist; // distance to the wall
 int  wall_flag;  // flag for the wall
} t_ray;

// Player struct
typedef struct s_player //the player structure
{
 int  x_pos_px; // player x position in pixels
 int  y_pos_px; // player y position in pixels
 double player_angle; // player angle
 float fov; // field of view in radians
 int  left_right; // left right flag
 int  up_down; // up down flag
  int  rot; // rotation flag
} t_player;

#endif


