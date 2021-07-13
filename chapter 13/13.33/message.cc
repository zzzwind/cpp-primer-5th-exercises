#include "message.h"

void Message::save(Folder &f) {
  folders.insert(&f);
  f.add_msg(this);
}

void Message::remove(Folder &f) {
  folders.erase(&f);
  f.rem_msg(this);
}

void Message::add_to_folders(const Message &m) {
  for (auto f : m.folders)
    f->add_msg(this);
}

Message::Message(const Message &m)
    : contents(m.contents), folders(m.folders) {
  add_to_folders(m);
}

void Message::remove_from_folders() {
  for (auto f : folders)
    f->remove(this);
}

Message::~Message() {
  remove_from_folders();
}

Message& Message::operator=(const Message &rhs) {
  remove_from_folders();
  contents = rhs.contents;
  folders = rhs.folders;
  add_to_folders(rhs);
  return *this;
}

void swap (Message &lhs, Message &rhs) {
  using std::swap;
  for(auto f : lhs.folders)
    f->rem_msg(&lhs);
  for(auto f : rhs.folders)
    f->rem_msg(&rhs);
  swap(lhs.folders, rhs.folders);
  swap(lhs.contents, rhs.contents);
  for (auto f : lhs.folders)
    f->add_msg(&lhs);
  for (auto f : rhs.folders)
    f->add_msg(&rhs);
}
