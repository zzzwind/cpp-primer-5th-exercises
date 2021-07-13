#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

class Message {
  friend class Folder;
 public:
  explicit Message(const std::string &str = "") : contents(str) {}
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();
  
 private:
  std::string contents;
  std::set<Folder *> folders;
  void add_to_folders(const Message&);
  void remove_from_folders();
};


#endif
