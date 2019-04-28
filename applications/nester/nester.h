#ifndef NESTER_H
#define NESTER_H

#include <string>
#include <vector>

#include "core/fileformats/svgLoader.h"
#include "core/geometry/polygons.h"


/* Helpers */

void drawPolygons   (std::vector<corecvs::Polygon> inputPolygons, int h, int w, std::string bmpname);
void drawSvgPolygons(std::vector<corecvs::Polygon> inputPolygons, std::string svgName);

void addSubPolygons (corecvs::SvgShape *shape, std::vector<corecvs::Polygon> &inputPolygons);

/* Actual work */

void LazySort(std::vector<corecvs::Polygon> &A);


void DoClockOrP(corecvs::Polygon &A);
void BLPlacement(corecvs::Rectangled A, std::vector <corecvs::Polygon> &input);
void showP(corecvs::Polygon &A);


#endif // NESTER_H