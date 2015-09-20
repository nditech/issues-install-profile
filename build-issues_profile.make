api = 2
core = 7.x
; Include the definition for how to build Drupal core directly, including patches:
projects[drupal][type] = "core"
includes[] = drupal-org-core.make

; Pull the issues_profile profile from git
projects[issues_profile][type] = "profile"
projects[issues_profile][download][type] = "git"
projects[issues_profile][download][branch] = "master"
projects[issues_profile][download][url] = "http://github.com/nditech/issues-install-profile"
