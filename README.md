# issues-install-profile

Install the code base:
  drush make --prepare-install <path_to_issues_profile>/build-issues_profile.make <path_to_installation_directory>

Move all files to the html doc root:
  mv <path_to_installation_directory>/* <path_to_html_doc_root>
  mv <path_to_installation_directory>/.* <path_to_html_doc_root>

Asuming an empty database is setup, install The Issues Tool by accessing the website in your browser:
  http://localhost

Follow the instructions.
