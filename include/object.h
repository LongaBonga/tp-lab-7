#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "common.h"

#define STONE_N '#'
#define PREY_N 'f'
#define PREDATOR_N 'S'

enum class ObjType { STONE, PREY, PREDATOR };

class Cell;
class Object {
 protected:
  Cell *cell;
  int livetime;
  bool dead;
  ObjType type;

 public:
  Object(Cell * = nullptr);
  virtual ~Object() {};
  virtual void live() = 0;  // жизнь объекта
  void setCell(Cell *);
  virtual char getSymbol() = 0;
  Cell *getCell();
  bool isLive();
  ObjType getType();
  void setLive(int lifetime);
  void readytodie();
  unsigned int getLive();
};
#endif
