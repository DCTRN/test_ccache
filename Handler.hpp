#pragma once

class Handler {
public:
  virtual ~Handler() = default;

  virtual void handle() = 0;
};