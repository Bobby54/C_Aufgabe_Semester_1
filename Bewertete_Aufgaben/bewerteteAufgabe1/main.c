#include <math.h>
#include "drawing.h"

int maxTank;
float use;
float used;
int distance;
int remain;
int percent, percentleft;

void first(){
  printf("Maximaler Tankinhalt in L: ");
  scanf("%d", &maxTank);

  printf("Kraftstoffverbrauch in L / 100 km: ");
  scanf("%f", &use);

  printf("Gefahrene Strecke in km: ");
  scanf("%d", &distance);

  used = (float)distance/100*use;


  remain = maxTank - used;

  percent = used/maxTank*100;
  percentleft = 100-percent;
  printf("Verbleibender Tankinhalt: %d L (%d Prozent)\n", remain, percentleft);

  draw_fuel();
}

void draw_fuel(){
  drawing_static_init(220, 100);
  cairo_set_source_rgb(drawing_cairo, 0, 0, 0);
  cairo_paint(drawing_cairo);

  cairo_rectangle(drawing_cairo, 5, 5, 200, 55);
  cairo_set_source_rgb(drawing_cairo, 1, 1, 1);
  cairo_fill(drawing_cairo);

  cairo_rectangle(drawing_cairo, 6, 6, 198, 53);
  cairo_set_source_rgb(drawing_cairo, 0, 0, 0);
  cairo_fill(drawing_cairo);

  cairo_set_source_rgb(drawing_cairo, 1, 1, 1);
  cairo_set_line_width(drawing_cairo, 2);
  cairo_move_to(drawing_cairo, 6, 60);
  cairo_line_to(drawing_cairo, 6, 70);
  cairo_move_to(drawing_cairo, 56, 60);
  cairo_line_to(drawing_cairo, 56, 70);
  cairo_move_to(drawing_cairo, 106, 60);
  cairo_line_to(drawing_cairo, 106, 70);
  cairo_move_to(drawing_cairo, 156, 60);
  cairo_line_to(drawing_cairo, 156, 70);
  cairo_move_to(drawing_cairo, 204, 60);
  cairo_line_to(drawing_cairo, 204, 70);
  cairo_stroke(drawing_cairo);

  cairo_move_to(drawing_cairo, 3, 85);
  cairo_set_font_size(drawing_cairo, 13);
  cairo_show_text(drawing_cairo, "0");

  cairo_move_to(drawing_cairo, 53, 85);
  cairo_set_font_size(drawing_cairo, 13);
  cairo_show_text(drawing_cairo, "25");

  cairo_move_to(drawing_cairo, 103, 85);
  cairo_set_font_size(drawing_cairo, 13);
  cairo_show_text(drawing_cairo, "50");

  cairo_move_to(drawing_cairo, 153, 85);
  cairo_set_font_size(drawing_cairo, 13);
  cairo_show_text(drawing_cairo, "75");

  cairo_move_to(drawing_cairo, 193, 85);
  cairo_set_font_size(drawing_cairo, 13);
  cairo_show_text(drawing_cairo, "100");

  int coordinate;


  coordinate = 1.98*(100-percent);


  if(percentleft > 14){
    cairo_rectangle(drawing_cairo, 6, 6, coordinate, 53);
    cairo_set_source_rgb(drawing_cairo, 0, 1, 0);
    cairo_fill(drawing_cairo);
  }else{
    cairo_rectangle(drawing_cairo, 6, 6, coordinate, 53);
    cairo_set_source_rgb(drawing_cairo, 1, 0, 0);
    cairo_fill(drawing_cairo);
  }



  drawing_static_write_png("fuel.png");

}


int main(){

  first();
  return 0;
}
