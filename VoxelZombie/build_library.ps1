dotnet clean "ZombieLib\" 
dotnet build "ZombieLib\"

echo $("-" * 50)


$dependencies = "Client\Assets\Dependencies\"
echo "Copying debug build to Client"
if (!(Test-Path $dependencies) ){mkdir $dependencies}
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.dll"  $dependencies
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.pdb" $dependencies

$dependencies = "Server\Assets\Dependencies\"
echo "Copying debug build to Server"
if (!(Test-Path $dependencies) ){mkdir $dependencies}
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.dll"  $dependencies
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.pdb" $dependencies

