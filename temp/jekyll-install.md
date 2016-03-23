 ruby -rubygems -e 'require "jekyll-import";
 >     JekyllImport::Importers::Blogger.run({
 >       "source"                => "../lvbtn_blogger/
 blog-03-22-2016.xml  _site/               
 >       "source"                => "../lvbtn_blogger/blog-03-22-2016.xml" ,
 >       "no-blogger-info"       => false, # not to leave blogger-URL info (id and old URL) in the front matter
 >       "replace-internal-link" => false, # replace internal links using the post_url liquid tag.
 >     })'
 /usr/lib/ruby/2.1.0/rubygems/core_ext/kernel_require.rb:55:in `require': cannot load such file -- jekyll-import (LoadError)
	from /usr/lib/ruby/2.1.0/rubygems/core_ext/kernel_require.rb:55:in `require'
		from -e:1:in `<main>'
		deanturpin@ThinkPad:~/Documents/github/j2$ sudo gem install jekyll-import
		[sudo] password for deanturpin: 
		Building native extensions.  This could take a while...
		ERROR:  Error installing jekyll-import:
			ERROR: Failed to build gem native extension.

			    /usr/bin/ruby2.1 extconf.rb
				mkmf.rb can't find header files for ruby at /usr/lib/ruby/include/ruby.h

				extconf failed, exit code 1

				Gem files will remain installed in /var/lib/gems/2.1.0/gems/nokogiri-1.6.8.rc3 for inspection.
				Results logged to /var/lib/gems/2.1.0/extensions/x86-linux/2.1.0/nokogiri-1.6.8.rc3/gem_make.out
				deanturpin@ThinkPad:~/Documents/github/j2$ ruby
				^Cruby: Interrupt

				deanturpin@ThinkPad:~/Documents/github/j2$ sudo gem bundle install jekyll-import
				ERROR:  While executing gem ... (Gem::CommandLineError)
				    Unknown command bundle
					deanturpin@ThinkPad:~/Documents/github/j2$ sudo gem install jekyll-import^C
					deanturpin@ThinkPad:~/Documents/github/j2$ sudo apt-get install ruby-dev



sudo gem install jekyll-import

Building native extensions.  This could take a while...
ERROR:  Error installing jekyll-import:
	ERROR: Failed to build gem native extension.

	    /usr/bin/ruby2.1 extconf.rb
		Using pkg-config version 1.1.7
		checking if the C compiler accepts ... yes
		Building nokogiri using packaged libraries.
		Using mini_portile version 2.1.0
		checking for gzdopen() in -lz... no
		zlib is missing; necessary for building libxml2
		*** extconf.rb failed ***
		Could not create Makefile due to some reason, probably lack of necessary
		libraries and/or headers.  Check the mkmf.log file for more details.  You may
		need configuration options.

		Provided configuration options:
			--with-opt-dir
				--without-opt-dir
					--with-opt-include
						--without-opt-include=${opt-dir}/include
							--with-opt-lib
								--without-opt-lib=${opt-dir}/lib
									--with-make-prog
										--without-make-prog
											--srcdir=.
												--curdir
													--ruby=/usr/bin/ruby2.1
														--help
															--clean
																--use-system-libraries
																	--enable-static
																		--disable-static
																			--with-zlib-dir
																				--without-zlib-dir
																					--with-zlib-include
																						--without-zlib-include=${zlib-dir}/include
																							--with-zlib-lib
																								--without-zlib-lib=${zlib-dir}/lib
																									--enable-cross-build
																										--disable-cross-build

																										extconf failed, exit code 1

																										Gem files will remain installed in /var/lib/gems/2.1.0/gems/nokogiri-1.6.8.rc3 for inspection.
																										Results logged to /var/lib/gems/2.1.0/extensions/x86-linux/2.1.0/nokogiri-1.6.8.rc3/gem_make.out

