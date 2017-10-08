#ifndef CLIP_X11_H_INCLUDED
#define CLIP_X11_H_INCLUDED

namespace clip {

class lock::impl {
 public:
  impl(void*);
  ~impl();

  bool locked() const;
  bool clear();
  bool is_convertiable(format f) const;
  bool set_data(format f, const char* buf, size_t len);
  bool get_data(format f, char* buf, size_t len) const;
  size_t get_data_length(format f) const;
  bool set_image(const image& image);
  bool get_image(image& image) const;
  bool get_image_spec(image_spec& spec) const;
};

}  // namespace clip

#endif