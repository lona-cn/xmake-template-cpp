#pragma once
#include <string>

#include "export.h"
namespace common {
class AppBuildInfo {
public:
  static AppBuildInfo &instance();

  const char *version() const;
  const char *versionMinor() const;
  const char *versionAlter() const;
  const char *versionBuild() const;
  const char *plat() const;
  const char *arch() const;
  const char *mode() const;
  const char *debug() const;
  const char *os() const;
  const char *gitCommit() const;
  const char *gitCommitLong() const;
  const char *gitCommitDate() const;
  const char *gitBranch() const;
  const char *gitTag() const;
  const char *gitTagLong() const;
  const char *gitCustom() const;
  const char *projectName() const;

  std::string toString() const;

private:
  class Impl;
  Impl *d_ptr;
  AppBuildInfo();
  ~AppBuildInfo();
  AppBuildInfo(const AppBuildInfo &) = delete;
  AppBuildInfo &operator=(const AppBuildInfo &) = delete;
};

int XMAKE_TEMPLATE_CPP_EXPORT add(int a, int b);
} // namespace common