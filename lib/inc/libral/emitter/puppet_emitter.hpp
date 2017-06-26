#pragma once

#include <libral/emitter/emitter.hpp>

#include <stdint.h>

namespace libral {
  class puppet_emitter : public emitter {
  public:
    puppet_emitter();
    void print_set(const type &type,
               const result<std::pair<update, changes>>& rslt) override;

    void print_find(const type &type,
               const result<boost::optional<resource>> &resource) override;

    void print_list(const type &type,
               const result<std::vector<resource>>& resources) override;

    void print_types(const std::vector<std::unique_ptr<type>>& types) override;

  private:
    void print_resource(const type &type, const resource &resource);
    void print_resource_attr(const std::string& name,
                             const value& v,
                             uint16_t maxlen);
  };
}
