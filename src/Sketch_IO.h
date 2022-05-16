#ifdef GREEDY_CLUST
#ifndef H_SKETCH_IO
#define H_SKETCH_IO
#include "SketchInfo.h"
#include "parameter.h"

void saveSketches(vector<SketchInfo> sketches, string inputFile, string sketchFunc, bool isContainment, int containCompress, bool sketchByFile, int sketchSize, int kmerSize);

void Sketch2Clust(string inputFile0, string inputFile1, string outputFile, double threshold, int threads);
#endif
#endif
