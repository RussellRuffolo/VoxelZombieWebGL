dotnet clean "ZombieLib\" 
dotnet build "ZombieLib\"

echo $("-"*50)

$client_dependencies = "Client\Assets\Dependencies\"
if (!(Test-Path $client_dependencies) ){mkdir $client_dependencies}
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.dll"  $client_dependencies
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.pdb" $client_dependencies
echo "Copied ZombieLib debug build to $client_dependencies"

$server_dependencies = "Server\Assets\Dependencies\"
if (!(Test-Path $server_dependencies) ){mkdir $server_dependencies}
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.dll"  $server_dependencies
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.pdb" $server_dependencies
echo "Copied ZombieLib debug build to $server_dependencies"
