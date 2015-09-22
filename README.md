# issues-install-profile

Install the code base:
  drush make --prepare-install &lt;path_to_issues_profile&gt;/build-issues_profile.make &lt;path_to_installation_directory&gt;

Move all files to the html doc root:
  mv &lt;path_to_installation_directory&gt;/* &lt;path_to_html_doc_root&gt;
  mv &lt;path_to_installation_directory&gt;/.* &lt;path_to_html_doc_root&gt;

Asuming an empty database is setup, install The Issues Tool by accessing the website in your browser:
  http://localhost

Follow the instructions.
