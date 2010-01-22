import os.path
import os

APPNAME='pyprop'
VERSION='1.1'

srcdir = '.'
blddir = 'build'

def set_options(opt):

	#make mpicxx the default CXX compiler 
	#unless CXX or MPICXX is specified
	mpicxx = "mpicxx"
	if "CXX" in os.environ:
		mpicxx = os.environ["CXX"]
	if "MPICXX" in os.environ:
		mpicxx = os.environ["MPICXX"]
	os.environ["CXX"] = mpicxx

	opt.tool_options('compiler_cxx')
	opt.tool_options('boost')

	opt.tool_options("pyprop_waf", tooldir="./pyprop/build")

	#options from subfolders
	opt.sub_options("core")


def configure(conf):
	print('-> Configuring')

	#check dependencies for tool compiler_cxx
	#conf.check_tool("compiler_cxx")
	conf.check_tool("pyprop_waf", tooldir="./pyprop/build")
	print conf.env

	#configure modules
	conf.sub_config("core")

def build(bld):
	bld.add_subdirs("core") 


