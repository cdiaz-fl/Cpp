#include	<iostream>
#include	<cstdlib>
#include	<cstdlib>

int	main(int argc, char **argv){
	if (argc != 2)
		return 1;

	std::string	val = argv[1];

	char		c_val;
	int			i_val;
	double	d_val;
	float		f_val;

	long int	check_i;

	//check if it's a pseudoliteral
	
	if (val == "-inff" || val == "+inff")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << val <<"\n";
		std::cout << "double: " << val[0] << "inf\n";
		return 0;
	}
	if (val == "nan" || val == "nanf")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
		return 0;
	}

	//check if it's not a literal
	if ((val[0] < '0' || val[0] > '9') && val.size() > 1 && (val[1] < '0' || val[1] > '9'))
	{
		std::cout << "Not a char/int/float/double literal\n";
		return 0;
	}


	//check if it is printable
	if (val.size() == 1 && val[0] >= 32 && val[0] <= 127)
	{
		i_val = static_cast<int>(val[0]);
		check_i = i_val;
		f_val = static_cast<float>(val[0]);
		d_val = static_cast<double>(val[0]);
		c_val = static_cast<char>(i_val);
	}
	else
	{
		i_val = std::atoi(val.data());
		check_i = std::atol(val.data());
		d_val = std::atof(val.data());
		f_val = static_cast<float>(d_val);
		c_val = static_cast<char>(i_val);
	}
	
	//final print
	if (i_val >= 32 && i_val <= 127)
	{
		std::cout << "char: '" << c_val << "'\n";
		std::cout << "int: " << i_val << "\n";
	}
	else if (i_val != check_i)
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
	}
	else
	{
		std::cout << "char: Non displayable\n";
		std::cout << "int: " << i_val << "\n";
	}
	std::cout << "float: " << f_val << "f\n";
	std::cout << "double: " << d_val << "\n";
	return 0;
}
