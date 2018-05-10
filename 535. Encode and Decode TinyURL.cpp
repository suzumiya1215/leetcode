class Solution {
public:

    //https://leetcode-cn.com/problems/encode-and-decode-tinyurl/description/
	// Encodes a URL to a shortened URL.
	string encode(string longUrl)
	{
		string str_cout = "https://";
		int relay = 0;
		int key = 17;
		/*map<char , string> map_protocol_type =
		{
			{ 'a', "worldwind://" },
		{ 'b',"gopher://" },
		{ 'c',"telnet://" },
		{ 'd',"https://" },
		{ 'e',"http://" },
		{ 'f',"mailto:" },
		{ 'g',"nntp://" },
		{ 'h', "ftp://" },
		{ 'i',"irc://" },
		{ 'j', "svn://" },
		{ 'k', "news:" }
		};*/
		//error,can not change "a" from char to string , it still are char
		/*vector<string , string> vec_str_protocol_type =
		{
			{ "a", "worldwind://" },
			{ "b","gopher://" },
			{ "c","telnet://" },
			{ "d","https://" },
			{ "e","http://" },
			{ "f","mailto:" },
			{ "g","nntp://" },
			{ "h", "ftp://" },
			{ "i","irc://" },
			{ "j", "svn://" },
			{ "k", "news:" }
		};*/
		vector<string> vec_str_protocol_type_1 = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k" };
		vector<string> vec_str_protocol_type_2 =
		{
			"worldwind://" ,
			"gopher://" ,
			"telnet://" ,
			"https://" ,
			"http://",
			"mailto:",
			"nntp://" ,
			"ftp://",
			"irc://",
			"svn://" ,
			"news:"
		};

		vector<int> vec_int_protocol_type = { 12,9,9,8,7,7,7,6,6,6,5 };

		for (int i = 0; i != vec_int_protocol_type.size(); ++i)
		{
			if (longUrl.size() >= vec_int_protocol_type.at(i) &&
				longUrl.compare(0 , vec_int_protocol_type.at(i) , vec_str_protocol_type_2.at(i)) == 0)
			{
				str_cout += vec_str_protocol_type_1.at(i);
				relay = vec_int_protocol_type.at(i);
				break;
			}
		}



		/*if (longUrl.size() >= 12 && longUrl.compare(0 , 12 , vec_str_protocol_type.at(0) , 0 , 12) == 0)
		{
			str_cout += "a";
			relay = 13;
		}*/




		////"http://","https://","ftp://","irc://","gopher://","telnet://",
		////"nntp://","worldwind://","mailto:","news:","svn://"
		//if (longUrl.size() >= 12 && longUrl.at(0) == 'w')//"worldwind://"
		//{
		//	str_cout += "a";
		//	relay = 13;
		//}
		//else if (longUrl.size() >= 9 && longUrl.at(0) == 'g')//"gopher://"
		//	str_cout += "b";
		//else if (longUrl.size() >= 9 && longUrl.at(0) == 't')//"telent://"
		//	str_cout += "c";
		//else if (longUrl.size() >= 8 && longUrl.at(0) == 'h'&& longUrl.at(4) == 's')//"https://"
		//	str_cout += "d";
		//else if (longUrl.size() >= 7 && longUrl.at(0) == 'h'&& longUrl.at(4) == ':')//"http://"
		//{
		//	str_cout += "e";
		//	str_cout += '/';
		//	relay = 8;
		//}
		//else if (longUrl.size() >= 7 && longUrl.at(0) == 'm')//"mailto:"
		//	str_cout += "f";
		//else if (longUrl.size() >= 7 && longUrl.at(0) == 'n'&& longUrl.at(3) == 'p')//"nntp://"
		//	str_cout += "g";
		//else if (longUrl.size() >= 6 && longUrl.at(0) == 'f')//"ftp://"
		//	str_cout += "h";
		//else if (longUrl.size() >= 6 && longUrl.at(0) == 'i')//"irc://"
		//	str_cout += "i";
		//else if (longUrl.size() >= 6 && longUrl.at(0) == 's')//"svn://"
		//	str_cout += "j";
		//else if (longUrl.size() >= 5 && longUrl.at(0) == 'n'&& longUrl.at(3) == 's')//"news:"
		//	str_cout += "k";
		//else
		//	cout << "error" << endl;

 
		while (relay != longUrl.size())
		{
			/*char ch_tran = longUrl.at(relay);
			int tran= int(ch_tran);
			str_cout += to_string(tran);*/
			str_cout += to_string(int(longUrl.at(relay)) ^ key);
			str_cout += '/';
			++relay;
		}

		return str_cout;
	}

	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl)
	{
		//关联容器
		string str_cout;
		int relay = 9 ;
		int key = 17;
		vector<char> vec_ch_protocol_type_1 = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k' };
		vector<string> vec_str_protocol_type_2 =
		{
			"worldwind://" ,
			"gopher://" ,
			"telnet://" ,
			"https://" ,
			"http://",
			"mailto:",
			"nntp://" ,
			"ftp://",
			"irc://",
			"svn://" ,
			"news:"
		};

		auto an = shortUrl.at(8);
		//cout << an << endl;

		for (int i=0;i!= vec_ch_protocol_type_1.size();++i)
		{
			if (vec_ch_protocol_type_1.at(i) == shortUrl.at(8))
			{
				str_cout = vec_str_protocol_type_2.at(i);
				break;
			}
		}


		string str_relay;
		while (relay != shortUrl.size())
		{
			if (shortUrl.at(relay) != '/')
				str_relay += shortUrl.at(relay);
			else
			{ 
				str_relay = stoi(str_relay) ^ key;
				str_cout += str_relay;
				str_relay.clear();
			}
			++relay;
		}

		return str_cout;
	}
	// Your Solution object will be instantiated and called as such:
	// Solution solution;
	// solution.decode(solution.encode(url));
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

//2018年5月10日22:17:42