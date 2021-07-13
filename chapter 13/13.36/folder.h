#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include <set>

class Message;
class Folder {
 public:
  Folder() = default;
  
  Folder(const Folder &);
  Folder& operator=(const Folder &);
  ~Folder();
  
  void save(Message &);
  void remove(Message &);
  
 private:
  std::set<Message *>messages;
  
  void add_msg(Message *);
  void rem_msg(Message *);
};

#endif
