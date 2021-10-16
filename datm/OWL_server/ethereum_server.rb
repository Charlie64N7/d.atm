require 'http'
require 'serialport'
require_relative 'OWL'


class SerialWeather

def initialize

@url = "https://api.blockcypher.com/v1/eth/main?token=57cc265492cd4323a2d1026e875df8c0"
	puts @url
	@owl = OWL.new self
	@owl.run
end

def println args
	puts "arduino told me to say, the #{args[0]}"
end

def log args
	print args[0].chomp
end

def get_block_number args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	block_number = weatherData["height"]
	puts "got block number: #{block_number}"
	@owl.write "get_block_number", block_number
end

def get_hash args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	hash = weatherData["hash"]
	puts "got hash: #{hash}"
	@owl.write "get_hash", hash
end

def get_unconfirmed_count args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	unconfirmed_count = weatherData["unconfirmed_count"]
	puts "got unconfirmed count: #{unconfirmed_count}"
	@owl.write "get_unconfirmed_count", unconfirmed_count
end

def get_high_gas_price args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	high_gas_price = weatherData["high_gas_price"]
	puts "got high gas price: #{high_gas_price}"
	@owl.write "get_high_gas_price", high_gas_price
end

def get_medium_gas_price args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	medium_gas_price = weatherData["medium_gas_price"]
	puts "got medium gas price: #{medium_gas_price}"
	@owl.write "get_medium_gas_price", medium_gas_price
end

def get_low_gas_price args
	weatherData = JSON.parse(HTTP.get(@url).to_s)
	low_gas_price = weatherData["low_gas_price"]
	puts "got low gas price: #{low_gas_price}"
		@owl.write "get_low_gas_price", low_gas_price
	end
end

weather = SerialWeather.new











