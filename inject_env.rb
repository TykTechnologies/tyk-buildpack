#!/usr/bin/env ruby
require 'json'
redis = JSON.parse(ENV['VCAP_SERVICES'])["rediscloud"][0]['credentials']

puts "export REDIS_HOST=#{redis['hostname']}"
puts "export REDIS_PORT=#{redis['port']}"
puts "export REDIS_PASSWORD=#{redis['password']}"
