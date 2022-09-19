#include "drawing.h"
#include <math.h>

int main(){

  printf("Wie viele Kreise wünschen Sie?\n");
  int n = 0;

  if (scanf("%d", &n) == 1) {
      printf("%d", n);
  } else {
      printf("Fehler.\n");
  }

  drawing_static_init(400, 400);
  cairo_set_source_rgb(drawing_cairo, 0, 0, 0);
  cairo_paint(drawing_cairo);


  cairo_translate(drawing_cairo, 200, 200);

  int i = 0;

  for (i = n; i >= 0; i--){

    cairo_set_line_width(drawing_cairo, 2);
    cairo_set_source_rgb(drawing_cairo, 1, 1, 1);
    cairo_arc (drawing_cairo, 0, 0, i*20, 0, 2*M_PI);
    cairo_stroke_preserve(drawing_cairo);
    cairo_set_source_rgb(drawing_cairo, 0, 0, 0);
    cairo_fill(drawing_cairo);

  }




  drawing_static_write_png("result.png");
  return 0;
}
